#include "class2.h"

/*!
 * \class Class2
 * \brief Class2 brief description.
 */

/*!
 * \brief Class2::Class2 is constructor ...
 */


Class2::Class2()
{
    color = 0;
}

/*!
 * \brief Class1::getVal function ...
 *
 * \return color as value
 */

int Class2::getColor()
{
    return color;
}

/*!
 * \brief Class1::setVal setup function
 *
 * \param val is color value
 *
 */

void Class2::setColor(int val)
{
    color = val;
}
