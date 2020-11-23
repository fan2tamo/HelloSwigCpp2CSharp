using System;

namespace HelloCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Classifier  classifier= HelloDll.GetInstance();
            classifier.Train(10);
         }
    }
}
