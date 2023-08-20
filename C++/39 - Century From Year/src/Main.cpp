int centuryFromYear(int year) 
{
  if (year % 100 == 0) {
    year /= 100;
  } else {
    year = (year / 100) + 1;
  }
  return year;
}