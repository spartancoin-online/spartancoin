// Copyright (c) 2017-2018 SpartanCoin Xjail developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef __xjail_spn_util_h__
#define __xjail_spn_util_h__

#include <map>
#include <vector>
#include <string>

using namespace std::string_literals;

namespace xjail {

void addStaticNodes(
	std::map<std::string, std::string> & mapArgs_node, 
	std::map<std::string, std::vector<std::string>> & mapMultiArgs_node
);

char lower(char ch);
char upper(char ch);
std::string & toLower(std::string && str);
std::string & toLower(std::string & str);
std::string & toUpper(std::string && str);
std::string & toUpper(std::string & str);

} // namespace xjail

#endif
