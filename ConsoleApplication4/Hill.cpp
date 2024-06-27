#include <iostream>
#include <string>
using namespace std;


class Rocket 
{

private:
    string rocketMod;

public:
    Rocket(const string& mod) : rocketMod(mod) {}

    void launch() 
    {
        cout << "rocket launch!" << std::endl;
    }

    void setRocketModel(const string& mod)
    {
        rocketMod = mod;
    }

    string getRocketModel() const 
    {
        return rocketMod;
    }
};


class Airplane 
{
private:
    string airplaneMod;

public:
    Airplane(const string& mod) : airplaneMod(mod) {}

    void fly() 
    {
        cout << "plane in the air!" << endl;
    }

    void setAirplaneMod(const string& mod) 
    {
        airplaneMod = mod;
    }

    string getAirplaneMod() const
    {
        return airplaneMod;
    }
};


class JetPlane : public Rocket, public Airplane 
{
private:
    string jetMod;

public:
    JetPlane(const string& rocketMod, const string& airplaneMod, const string& jetMod)
      :Rocket(rocketMod), Airplane(airplaneMod), jetMod(jetMod) {}

    void flyFast()
    {
        cout << "turbo plane!" << endl;
    }

    void setJetModel(const string& mod) 
    {
        jetMod = mod;
    }

    string getJetModel() const 
    {
        return jetMod;
    }
};



#include <iostream>
#include <string>
using namespace std;


class Boeing747 : public JetPlane 
{
private:
    string boeingMod;

public:
    Boeing747(const string& rocketMod, const string& airplaneMod, const string& jetMod, const string& boeingMod)
        : JetPlane(rocketMod, airplaneMod, jetMod), boeingMod(boeingMod) {}

    void carryPassengers() 
    {
        cout << "Boeing747 is JetPlane !" << endl;
    }

    void setBoeingMod(const string& mod) 
    {
        boeingMod = mod;
    }

    string getBoeingModel() const 
    {
        return boeingMod;
    }
};

