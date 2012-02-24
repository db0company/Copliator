
#ifndef			EXAMPLE_H_
# define		EXAMPLE_H_

class			Example
{
/* ************************************************************************* */
/*                             Attributes                                    */
/* ************************************************************************* */
 private:
  const Landslide &			noEscapeFromReality;
  bool					isThisTheRealLife;
  std::list<std::string>		littleHighLittleLow;

/* ************************************************************************* */
/*                             Coplian Form                                  */
/* ************************************************************************* */
 public:
  Example(void);
  Example(Example const &);
  Example &		operator=(Example const &);
  ~Example(void);

/* ************************************************************************* */
/*                             Getters/Setters                               */
/* ************************************************************************* */
 public:
  const Landslide & const	getNoEscapeFromReality(void) const;
  void				setNoEscapeFromReality(const Landslide & const &);
  bool const			getIsThisTheRealLife(void) const;
  void				setIsThisTheRealLife(bool const &);
  std::list<std::string> const	getLittleHighLittleLow(void) const;
  void				setLittleHighLittleLow(std::list<std::string> const &);

/* ************************************************************************* */
/*                             Member Functions                              */
/* ************************************************************************* */
 public:

};

#endif			// !EXAMPLE_H_

