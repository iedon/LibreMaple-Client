//////////////////////////////////////////////////////////////////////////////
// This file is part of the LibreMaple MMORPG client                        //
// Copyright © 2015-2016 Daniel Allendorf, 2018-2019 LibreMaple Team        //
//                                                                          //
// This program is free software: you can redistribute it and/or modify     //
// it under the terms of the GNU Affero General Public License as           //
// published by the Free Software Foundation, either version 3 of the       //
// License, or (at your option) any later version.                          //
//                                                                          //
// This program is distributed in the hope that it will be useful,          //
// but WITHOUT ANY WARRANTY; without even the implied warranty of           //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
// GNU Affero General Public License for more details.                      //
//                                                                          //
// You should have received a copy of the GNU Affero General Public License //
// along with this program.  If not, see <http://www.gnu.org/licenses/>.    //
//////////////////////////////////////////////////////////////////////////////

// This will be moved into UINpcTalk.
// Keeping it so I can copypaste some code later.

/*
    std::size_t Npctext::parseL(std::string& str, std::size_t pos)
    {
        std::size_t next = str.find_first_of('#', pos + 2);
        if (next != std::string::npos)
        {
            try
            {
                //std::int32_t selection = std::stoi(str.substr(pos + 2, next -
   pos
   + 2)); str.replace(str.begin() + pos, str.begin() + next + 1, ""); return
   pos + 1;
            }
            catch (const std::exception&)
            {
                str.replace(str.begin() + pos, str.begin() + next + 1,
   "FORMATERROR"); return pos + 11 + 1;
            }
        }
        else
        {
            str.replace(str.begin() + pos, str.begin() + pos + 2,
   "SYNTAXERROR"); return pos + 11 + 1;
        }
    }

    std::size_t Npctext::parsez(std::string& str, std::size_t pos)
    {
        std::size_t next = str.find_first_of('#', pos + 2);
        if (next != std::string::npos)
        {
            try
            {
                const ItemData& idata = ItemData::get(std::stoi(str.substr(pos
   + 2, next))); if (idata.is_valid())
                {
                    str.replace(str.begin() + pos, str.begin() + next + 1,
   idata.get_name()); return pos + idata.get_name().length() + 1;
                }
                else
                {
                    str.replace(str.begin() + pos, str.begin() + next + 1,
   "IDERROR"); return pos + 7 + 1;
                }
            }
            catch (const std::exception&)
            {
                str.replace(str.begin() + pos, str.begin() + next + 1,
   "FORMATERROR"); return pos + 11 + 1;
            }
        }
        else
        {
            str.replace(str.begin() + pos, str.begin() + pos + 2,
   "SYNTAXERROR"); return pos + 11 + 1;
        }
    }

    std::size_t Npctext::parseh(std::string& str, std::size_t pos)
    {
        std::size_t next = str.find_first_of('#', pos + 2);
        if (next != std::string::npos)
        {
            try
            {
                std::int32_t type = std::stoi(str.substr(pos + 2, next - pos +
   2)); std::string insert; switch (type)
                {
                case 0:
                    insert = Stage::get().get_player().get_stats().get_name();
                    break;
                default:
                    insert = "";
                }
                str.replace(str.begin() + pos, str.begin() + next + 1, insert);
                return pos + insert.length() + 1;
            }
            catch (const std::exception&)
            {
                str.replace(str.begin() + pos, str.begin() + next + 1,
   "FORMATERROR"); return pos + 11 + 1;
            }
        }
        else
        {
            str.replace(str.begin() + pos, str.begin() + pos + 2,
   "SYNTAXERROR"); return pos + 11 + 1;
        }
    }

    std::size_t Npctext::parsev(std::string& str, std::size_t pos)
    {
        std::size_t next = str.find_first_of('#', pos + 2);
        if (next != std::string::npos)
        {
            try
            {
                if (const ItemData& idata =
   ItemData::get(std::stoi(str.substr(pos + 2, next))))
                {
                    Image image = { idata.get_icon(false), offset };
                    image.texture.shift(Point<std::int16_t>(0, 32));
                    images.push_back(image);
                    offset.shift_x(32);
                    str.replace(str.begin() + pos, str.begin() + next + 1, "");
                    return pos + 1;
                }
                else
                {
                    str.replace(str.begin() + pos, str.begin() + next + 1,
   "IDERROR"); return pos + 7 + 1;
                }
            }
            catch (const std::exception&)
            {
                str.replace(str.begin() + pos, str.begin() + next + 1,
   "FORMATERROR"); return pos + 11 + 1;
            }
        }
        else
        {
            str.replace(str.begin() + pos, str.begin() + pos + 2,
   "SYNTAXERROR"); return pos + 11 + 1;
        }
    }

    void Npctext::draw(Point<std::int16_t> position) const
    {
        for (auto& line : lines)
        {
            line.text
                .draw(line.offset + position);
        }

        for (auto& image : images)
        {
            image.texture
                .draw(image.offset + position);
        }
    }

    std::int16_t Npctext::getheight() const
    {
        return offset.y();
    }
*/
