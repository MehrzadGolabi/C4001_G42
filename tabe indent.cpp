void indent()
{
    string line;
     int i=0;
  ifstream input("c:/test.txt");
  ofstream output("c:/edit.txt");

 while(getline(input,line))
 {   if(i==0)
      {
        output<<"    ";
        output<<line<<"\n";
        i++;
       }
    output<<line<<"\n";
 }