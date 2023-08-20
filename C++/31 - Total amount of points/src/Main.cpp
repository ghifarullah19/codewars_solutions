int points(const std::array<std::string, 10>& games) {
    int x = 0; int y = 0; int i = 0;
    int our_team = 0; int opponent_team = 0;
  
    for (std::string game : games) {
      for (char g : game) {
        i++;
        
        if (g != ':') {
          if (i == 1) {
            x = g - 48;
          }
          if (i == 3) {
            y = g - 48;
          }
        }
      }
      
      if (x > y) {
        our_team += 3;
        opponent_team += 0;
      } else if (x < y) {
        our_team += 0;
        opponent_team += 3;
      } else if (x == y) {
        our_team += 1;
        opponent_team += 1;
      }
      
      x = 0; y = 0; i = 0;
    }
   return our_team;
}