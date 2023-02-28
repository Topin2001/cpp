#include "ZZ.hpp"

bool  operator<(ZZ const & z1, ZZ const & z2) {
    return z1.note < z2.note;
}

std::ostream &operator<<(std::ostream &stream, ZZ const &z)
{
    stream << z.prenom << " " << z.nom << " a eu la note de : " << z.note;
    return stream;
};