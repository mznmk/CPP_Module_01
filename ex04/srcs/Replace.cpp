/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:52:15 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 14:11:40 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Relpace.hpp"

// ======================== constructor / destructor ======================== //

Replace::Replace(const std::string &readpath,
                 const std::string &s1,
                 const std::string &s2):
                 _readpath(readpath), _s1(s1), _s2(s2)
{
    _writepath = _readpath + ".replace";
}

Replace::~Replace()
{

}

// ================================= method ================================= //

/*!
** @brief   replace word
** @param   buff        replaced string
** @return  none
*/
void    Replace::_replace(std::string &buff)
{
    // [ avoid error ]
    if (_s1.empty())
        return;
    if (_s1 == _s2)
        return;

    // [ replace word ]
    while (42) {
        std::size_t pos = buff.find(_s1);
        if (pos == std::string::npos) {
            break;
        }
        buff.erase(pos, _s1.length());
        buff.insert(pos, _s2);
    }
}

/*!
**  @brief  read from "readfile" & replace word & write to "writefile"
**  @param  none
**  @return none
*/
void    Replace::replace()
{
    std::string         buff;
    std::stringstream   stream;

    // [ read/replace stream ]
    std::ifstream   ifs;
    ifs.open(_readpath.c_str(), std::ios::in);
    if (!ifs.is_open()) {
        std::cerr << FNT_BOLD CLR_RED ERR_MSG_READ_FILE ESC_RESET << std::endl;
        return;
    }
    while (std::getline(ifs, buff))
    {
        _replace(buff);
        stream << buff << "\n";
    }
    stream.flush();
    ifs.close();

    // [ write stream ]
    std::ofstream   ofs;
    ofs.open(_writepath.c_str(), std::ios::trunc);
    ofs << stream.str();
    ofs.close();
}
