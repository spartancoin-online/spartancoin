// Copyright (c) 2017 xjail.tiv.cc developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef __xjail_spn_util_h__
#define __xjail_spn_util_h__

#include <map>
#include <vector>
#include <string>

namespace xjail {

static void addStaticNodes(std::map<std::string, std::string> & mapArgs_node, 
	std::map<std::string, std::vector<std::string>> & mapMultiArgs_node)
{
	const std::string & key = "-addnode";
	const std::vector<std::string> & addrs = {
		"spn-node39.xjail.tiv.cc", 
		"spn-node71.xjail.tiv.cc"
	};
	for (std::size_t i=0; i<addrs.size(); i++) {
		mapArgs_node[key] = addrs[i];
		mapMultiArgs_node[key].push_back(addrs[i]);
	}
}

} // namespace xjail

#endif
