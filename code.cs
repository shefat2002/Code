using System;

namespace HelloWorld
{
  class Program
  {
    static void Main(string[] args)
    {
    	int  x,y,z;
        x=y=z=10;
        float f = 1.3e4F;
      Console.WriteLine(x+y+z);
      Console.WriteLine(f);
      Console.WriteLine(Convert.ToString(f));
    }
  }
}