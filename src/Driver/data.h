#pragma once
#pragma warning(disable: 6011) // dereferencing null pointer bla bla bla
#include "pch.h"

extern bool bEsp;
extern bool bAimbot;
extern bool NoSpread;
extern bool bOnlyEnemies;
extern bool AwpPistolBot;



void DataInitialize();
void DataLoop();