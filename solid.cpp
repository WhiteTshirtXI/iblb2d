# include <iostream>
# include <fstream>
# include <iomanip>
# include <string>
# include <cmath>

# include "solid.h"

Solid::Solid(){
  x=NULL;
  v=NULL;
  xc=NULL;
  force=NULL;
  lx=0;
  ly=0;
}

Solid::~Solid(){
}
