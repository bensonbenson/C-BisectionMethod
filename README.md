# C++ Bisection Method

The bisection method is a way to approximate a root by repeatedly bisecting an interval. While it is simple to read and understand, the method is very slow. 

The included file approximates sqrt{3} on the interval [1,2] to 10^-5 places of precision. 

### Further usage
You can edit the precision accuracy by changing the epsilon (our epsilon is the double variable "e"). And then since cout precision is limited by default, make sure you change cout's precision with:

```c++
double e = 0.000000001;

...

cout.precision(10);
cout << "root found, root = " << c << endl;
```

References:

[wiki](https://en.wikipedia.org/wiki/Bisection_method)

[textbook for MATH 5336](https://www.amazon.com/Practical-Analysis-Variable-Undergraduate-Mathematics/dp/0387954848)
