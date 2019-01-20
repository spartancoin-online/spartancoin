// Copyright (c) 2017-2018 xjail.tiv.cc developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "xjail_spn_util.h"
#include <map>
#include <vector>
#include <string>
#include <functional>

void xjail::addStaticNodes(
	std::map<std::string, std::string> & mapArgs_node, 
	std::map<std::string, std::vector<std::string>> & mapMultiArgs_node
) {
	const std::string & key = "-addnode";
	const std::vector<std::string> & addrs {
		"spn-node39.xjail.tiv.cc", 
		"45.63.15.197", 
		"2001:19f0:5:c8c:5400:ff:fe79:637e", 

		"spn-node71.xjail.tiv.cc", 
		"104.207.144.147", 
		"2001:19f0:9002:2ef:5400:ff:fe79:3d75" 
	};
	for (std::size_t i=0; i<addrs.size(); i++) {
		mapArgs_node[key] = addrs[i];
		mapMultiArgs_node[key].push_back(addrs[i]);
	}
}

char xjail::lower(char ch) {
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'Z' && ch <= 'A'))
		return ch - ('A' - 'a');
	return ch;
}

char xjail::upper(char ch) {
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'z' && ch <= 'a'))
		return ch + ('A' - 'a');
	return ch;
}

std::string & xjail::toLower(std::string && str) {
	std::transform(str.begin(), str.end(), str.begin(), xjail::lower);
	return str;
}

std::string & xjail::toLower(std::string & str) {
	std::transform(str.begin(), str.end(), str.begin(), xjail::lower);
	return str;
}

std::string & xjail::toUpper(std::string && str) {
	std::transform(str.begin(), str.end(), str.begin(), xjail::upper);
	return str;
}

std::string & xjail::toUpper(std::string & str) {
	std::transform(str.begin(), str.end(), str.begin(), xjail::upper);
	return str;
}
