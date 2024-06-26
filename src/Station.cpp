#include "Station.hpp"

void betweenStations(Train* train)
{
    for (int i = 0; i < train->getRoute().size(); i++)
    {
        cout <<"station name : " <<train->getRoute()[i].stationName <<"distance from the previous station : "<<train->getRoute()[i].distanceFromPrevious << endl;
    }
    
}


// show all the stations
int stationNo = 1;
void allStations()
{
    
    for(auto& t : trainList)
    {
        for(auto& s : t.getRoute())
        {
            cout <<stationNo++"."<<s.stationName << endl;
        }
    }
}


// return the  particular station
stations* returnStation(int no)
{
    stationNo = 1;
    for(auto& t : trainList)
    {
        for(auto& s : t.getRoute())
        {
            if (stationNo++ == no)
            {
                return s;
            }
            
        }
    }
    return nullptr;
}