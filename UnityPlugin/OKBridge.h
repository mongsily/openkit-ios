//
//  OKBridge.h
//  OKBridge
//
//  Updated by Lou Zell on 2/14/13.
//  Copyright (c) 2013 OpenKit. All rights reserved.
//
//  Email feedback and suggestions to Lou at lzell11@gmail.com
//

#import <Foundation/Foundation.h>


void OKBridgeSetAppKey(const char *appKey);
void OKBridgeSetEndpoint(const char *endpoint);
void OKBridgeShowLeaderboards();
void OKBridgeShowLoginUI();
void OKBridgeSubmitScore(int64_t scoreValue, int leaderboardID, int metadata, const char *displayString, const char *gameObjectName);
int OKBridgeGetCurrentUserOKID();
const char* OKBridgeGetCurrentUserNick();
long long OKBridgeGetCurrentUserFBID();
long long OKBridgeGetCurrentUserTwitterID();
