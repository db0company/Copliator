
#include		"Example.hpp"


Example::Example(void)
  : noEscapeFromReality(), isThisTheRealLife(), littleHighLittleLow()
{}

Example::Example(Example const & other)
    : noEscapeFromReality(other.noEscapeFromReality), isThisTheRealLife(other.isThisTheRealLife), littleHighLittleLow(other.littleHighLittleLow)
{}

Example &		Example::operator=(Example const & other)
{
    if (&other != this)
    {
      this->noEscapeFromReality = other.noEscapeFromReality;
      this->isThisTheRealLife = other.isThisTheRealLife;
      this->littleHighLittleLow = other.littleHighLittleLow;

      // If there is a pointer to something allocated, do this :
      // if (this->SomeThingAllocated)
      //   delete this->SomeThingAllocated;
      // this->SomeThingAllocated = CopyFunc(other.SomeThingAllocated);
    }
  return (*this);
}

Example::~Example(void)
{}


const Landslide & const		Example::getNoEscapeFromReality(void) const
{
  return (this->noEscapeFromReality);
}

void		Example::setNoEscapeFromReality(const Landslide & const & noEscapeFromReality)
{
  this->noEscapeFromReality = noEscapeFromReality;
}

bool const		Example::getIsThisTheRealLife(void) const
{
  return (this->isThisTheRealLife);
}

void		Example::setIsThisTheRealLife(bool const & isThisTheRealLife)
{
  this->isThisTheRealLife = isThisTheRealLife;
}

std::list<std::string> const		Example::getLittleHighLittleLow(void) const
{
  return (this->littleHighLittleLow);
}

void		Example::setLittleHighLittleLow(std::list<std::string> const & littleHighLittleLow)
{
  this->littleHighLittleLow = littleHighLittleLow;
}





