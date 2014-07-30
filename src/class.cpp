#include "class.h"


/*!
 * \class Class1
 * \brief Class1 brief description.
 */

/*!
 * \brief Class1::Class1 is constructor ...
 */

Class1::Class1()
{
    value = 0;
}

/*!
 * \brief Class1::getVal function ...
 *
 * \return value as value :)
 */

int Class1::getVal()
{
    return value;
}

/*!
 * \brief Class1::setVal setup function
 *
 * \param val to set value
 */

void Class1::setVal(int val)
{
    value = val;
}
