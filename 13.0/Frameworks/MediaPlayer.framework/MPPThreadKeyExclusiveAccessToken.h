//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPExclusiveAccessToken-Protocol.h>

@interface MPPThreadKeyExclusiveAccessToken : NSObject <MPExclusiveAccessToken>
{
    unsigned long long _key;
}

+ (id)tokenWithKey:(unsigned long long)arg1;
- (void)assertHasExclusiveAccess;
- (id)_init;

@end

