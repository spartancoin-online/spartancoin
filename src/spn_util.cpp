// Copyright (c) 2017-2018 New SpartanCoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "spn_util.h"
#include <map>
#include <vector>
#include <string>
#include <functional>

void spn::addStaticNodes(
	std::map<std::string, std::string> & mapArgs_node, 
	std::map<std::string, std::vector<std::string>> & mapMultiArgs_node
) {
	const std::string key = "-addnode";
	const std::vector<std::string> addrs {
		"node-a.spartancoin.ooo",
		"45.63.15.197", 
		"2001:19f0:5:c8c:5400:ff:fe79:637e", 

		"node-b.spartancoin.ooo", 
		"104.207.144.147", 
		"2001:19f0:9002:2ef:5400:ff:fe79:3d75" 
	};
	for (std::size_t i=0; i<addrs.size(); i++) {
		mapArgs_node[key] = addrs[i];
		mapMultiArgs_node[key].push_back(addrs[i]);
	}
}

char spn::lower(char ch) {
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'Z' && ch <= 'A'))
		return ch - ('A' - 'a');
	return ch;
}

char spn::upper(char ch) {
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'z' && ch <= 'a'))
		return ch + ('A' - 'a');
	return ch;
}

std::string & spn::toLower(std::string && str) {
	std::transform(str.begin(), str.end(), str.begin(), spn::lower);
	return str;
}

std::string & spn::toLower(std::string & str) {
	std::transform(str.begin(), str.end(), str.begin(), spn::lower);
	return str;
}

std::string & spn::toUpper(std::string && str) {
	std::transform(str.begin(), str.end(), str.begin(), spn::upper);
	return str;
}

std::string & spn::toUpper(std::string & str) {
	std::transform(str.begin(), str.end(), str.begin(), spn::upper);
	return str;
}
