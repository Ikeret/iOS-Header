//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthService, NSLock;

@interface HKHealthServiceSession : NSObject
{
    HKHealthService *_service;
    NSLock *_propertyLock;
    unsigned long long _sessionIdentifier;
    CDUnknownBlockType _sessionHandler;
    CDUnknownBlockType _characteristicsHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType characteristicsHandler; // @synthesize characteristicsHandler=_characteristicsHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property(nonatomic) unsigned long long sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(readonly, nonatomic) HKHealthService *service; // @synthesize service=_service;
- (id)initWithService:(id)arg1;

@end

