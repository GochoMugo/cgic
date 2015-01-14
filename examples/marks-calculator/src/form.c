#include <stdio.h>
#include <stdlib.h>
#include <cgic.h>


int cgiMain() {
  // page headers
  cgiHeaderContentType("text/html");
  
  // student information
  char buffer[51];
  cgiFormStringNoNewlines("studentRegNo", buffer, 51);
  fprintf(cgiOut, "Registration No.: %s<br>", buffer);
  cgiFormStringNoNewlines("studentName", buffer, 51);
  fprintf(cgiOut, "Name: %s<br>", buffer);

  // collecting marks
  double maths, english, swahili, socialStudies, science;
  cgiFormDoubleBounded("maths", &maths, 0, 100, 0);
  cgiFormDoubleBounded("english", &english, 0, 100, 0);
  cgiFormDoubleBounded("swahili", &swahili, 0, 100, 0);
  cgiFormDoubleBounded("socialStudies", &socialStudies, 0, 100, 0);
  cgiFormDoubleBounded("science", &science, 0, 100, 0);

  // calculating average
  double average = (maths + english + swahili
    + socialStudies + science) / 5;
  fprintf(cgiOut, "Average: %.2f/100<br>", average);

  // calculating weighted marks
  double weighted = (maths * 15) + (english * 15)
    + (swahili * 10) + (socialStudies * 5) + (science * 5);
  weighted /= (5 * 50);
  fprintf(cgiOut, "Weighted: %.2f/20<br>", weighted);

  return 0;
}
