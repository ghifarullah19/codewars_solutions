public class Kata
{
  public static string PeopleWithAgeDrink(int old)
  {
    string result = "";
    if(old < 14)
    {
      result = "drink toddy";
    }
    else if (old >= 14 && old < 18)
    {
      result = "drink coke";
    }
    else if (old >= 18 && old < 21)
    {
      result = "drink beer";
    }
    else if (old >= 21)
    {
      result = "drink whisky";
    }
    else
    {
      result = "error";
    }   
    return result;
  }
}