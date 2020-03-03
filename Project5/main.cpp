#include"Composite.h"
#include"Leaf.h"
#include<iostream>
#include"SongComponent.h"
#include"Song.h"
#include"SongGroup.h"


int main()
{
  SongComponent* song = new Song(" Tetris ", " Doctor P ", 2011);
  SongComponent* sg = new SongGroup(SongGroup::Industrial);
  sg->add(song); 
  sg->displaySongInfo();
  std::cout << std::endl;


  SongComponent* song2 = new Song(" Head Like a Hole ", " NIN ", 1990);
  SongComponent* sg2 = new SongGroup(SongGroup::Dubstep);
  
  
  //sg4->add(sg2);
  sg2->add(song2);
  sg2->displaySongInfo();
  std::cout << std::endl;


  SongComponent* song3 = new Song(" Ace of Spades ",  " Motorhead ", 1980);
  SongComponent* sg3 = new SongGroup(SongGroup::Metal);
  sg3->add(song3);
  sg3->displaySongInfo();
  std::cout << std::endl;

  //electronic music - Dubstep 
  SongComponent* sg5 = new SongGroup(SongGroup::Electronic);
  SongComponent* sg6 = new SongGroup(SongGroup::Dubstep);
  sg5->add(sg6);
  sg6->displaySongInfo();
  std::cout << std::endl;

  //electronic music - Industrial 
  SongComponent* sg7 = new SongGroup(SongGroup::Electronic);
  SongComponent* sg8 = new SongGroup(SongGroup::Industrial);
  sg7->add(sg8);
  sg8->displaySongInfo();
  std::cout << std::endl;

  //electronic music - Extratome 
  SongComponent* sg9 = new SongGroup(SongGroup::Electronic);
  SongComponent* sg10 = new SongGroup(SongGroup::Speedcore);
  SongComponent* sg11 = new SongGroup(SongGroup::Extratone);
  SongComponent* song4 = new Song(" Forever ", " The Berzerker ", 2000);
  sg9->add(sg10);
  sg10->add(sg11);
  sg11->add(song4);
  sg11->displaySongInfo();
  std::cout << std::endl;



  }