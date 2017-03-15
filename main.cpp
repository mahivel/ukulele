//
//  main.cpp
//  Ukulele_classes
//
//  Created by Mahitha on 14/03/2017.
//  Copyright © 2017 Mahitha. All rights reserved.
//

#include <iostream>

using namespace std;

class Body{
    
public:
    Body();
    void printlenwid();
    float bodylength;
    string bodycolor;
    string woodtype;
    
};

Body::Body(): woodtype("mahogany")
{}

void Body::printlenwid()
{
    cout <<" length and color of Ukulele body are " << bodylength << "inches and " << bodycolor <<" "<< " in color" <<" and " << woodtype << " wood is used" << endl;
}

class Bridge : public Body {
public:
    int bridgewidth;
    int bridgelength;
    void prinbridge();
};

void Bridge::prinbridge()
{
    cout<<"Bridge has a length and width of "<<bridgelength<<"cm and "<<bridgewidth<<"cm and has "<<woodtype<< " wood"<< endl;
}

class Saddle{
public:
    Saddle();
    float sadlen;
    float sadwid;
    string sadcol;
    void prinsad();
    
};

Saddle::Saddle(): sadcol("white")
{

}

void Saddle::prinsad()
{
    cout<<"The Saddle is "<<sadcol<< " in color and has length and width of "<<sadlen<< "cm and "<<sadwid<<"cm "<<endl;
    
}

class Soundhole{
public:
    float diameter;
    float depth;
    void prinshole();
    
};
void Soundhole:: prinshole()
{
    cout<<"The soundhole has a diameter of "<<diameter<<"cm and a depth of "<<depth<<"cm "<<endl;
    
}

class Fretboard{
public:
    Fretboard();
    string fretwood;
    int no_of_frets;
    int num_fretmarks;
    void prinfboard();
};
Fretboard::Fretboard(): fretwood("Pine")
{
    
}

void Fretboard:: prinfboard()
{
    cout<<"The Fretboard has "<<no_of_frets<<" frets and "<<num_fretmarks<<" fretmarkings and uses "<<fretwood<<" wood"<<endl;
}


class Frets: public Fretboard
{
public:
    string fretcol;
    Frets();
    void prinfrets();
};

Frets::Frets(): fretcol("white")
{
    
}

void Frets::prinfrets()
{
    cout<<"The frets are "<<fretcol<<" in color and there are "<<no_of_frets<<" frets in total "<<endl;
}

class Head{
public:
    string headwood;
    int num_oftuners = 4;
    float headlen;
    Head();
    void printhead();
    
};
Head::Head(): headwood("Oak")
{
    
}

void Head::printhead()
{
    cout<<"The head is made of "<<headwood<<" and is "<<headlen<<"cm long and has "<<num_oftuners<<" tuners attatched to it"<<endl;
}

class Tuners: public Head
{
public:
    string tun_material;
    int num_strings_eachtuner = 1;
    string tight = "right";
    string loosen = "left";
    Tuners();
    void printun();
};

Tuners::Tuners(): tun_material("plastic"){}

void Tuners::printun()
{
    cout<<"There are "<<num_oftuners<<" tuners and they are made of "<<tun_material<<".Each tuner has "<<num_strings_eachtuner<<" string attached to it. Turn "<<tight<<" to tighten the strings and "<<loosen<<" to loosen the strings "<<endl;
}

class Strings: public Head{
public:
    float strnlen;
    string strnmaterial;
    void printstrings();
    Strings();
};

Strings::Strings(): strnmaterial("metal"){}

void Strings::printstrings(){
    cout<<"There are "<<num_oftuners<<" strings, each attatched to one of the four tuners. They are made of "<<strnmaterial<<" and are "<<strnlen<<"cm long. "<<endl;
}

    
int main()
{
    Body u;
    u.bodylength = 12.3;
    u.bodycolor = "brown";
    u.printlenwid();

    Bridge b;
    b.bridgewidth = 10;
    b.bridgelength = 5;
    b.prinbridge();
    
    Saddle s;
    s.sadlen = 4.5;
    s.sadwid = 1.3;
    s.prinsad();
    
    Soundhole x;
    x.diameter = 7.8;
    x.depth = 6.5;
    x.prinshole();
    
    Fretboard f;
    f.no_of_frets = 12;
    f.num_fretmarks = 7;
    f.prinfboard();
    
    Frets fr;
    fr.no_of_frets = 12;
    fr.prinfrets();
    
    Head h;
    h.headlen = 5.5;
    h.printhead();
    
    Tuners t;
    t.num_oftuners = 4;
    t.printun();
    
    Strings sn;
    sn.strnlen = 14.8;
    sn.printstrings();
    
    
    return 0;
    
}


