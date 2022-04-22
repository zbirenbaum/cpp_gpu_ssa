#include <iostream>

#define N_DELAY_STEPS 3
#define MAKE_FUNC(FNAME) [](int t){ return t+1; }
#define REACTION(component, number) auto component##number = MAKE_FUNC(test)
#define FOR_EACH_DELAY for(int i=0; i<N_DELAY_STEPS; i++)
#define DELAYED_REACTIONS struct {REACTION(MSH1), REACTION(PSH1)} reactions
#define REACTIONS {REACTION(MSH1), REACTION(MDH1), REACTION(PSH1), REACTION(PDH1)}

// #define FUNCTION_NAME(funcName, number) [](int number){ return (number+1); }
// int msh10(int number){ return number + 1; }

// #define CREATE_DELAYED_REACTIONS(NAME,AMOUNT)  \
//   void * REACTION(#NAME, #AMOUNT) { \
//     writeAmount(amount, fp); \
//   };
#include <iostream>
// #define PROP_MSH1(ph1) (RATE_MSH1*(1/(ph1*ph1))) //requres count of PH1 to calc
// #define PROP_MDH1(mh1) (RATE_MDH1/(mh1)) //requres count of PH1 to calc
// #define PROP_PSH1(mh1) (mh1*(1/(PH1*PH1))) //requres count of PH1 to calc
// #define PROP_PDH1(ph1) (RATE_PDH1*ph1) //requres count of PH1 to calc
// #define REACTIONS {PROP_MSH1, PH1}

int main() {
  REACTION(msh1, number);
  return 0;
}
