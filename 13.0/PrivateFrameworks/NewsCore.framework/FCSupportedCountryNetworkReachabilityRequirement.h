//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCNetworkReachabilityRequirement-Protocol.h>

@class NSString;
@protocol FCNetworkReachabilityRequirementObserving;

@interface FCSupportedCountryNetworkReachabilityRequirement : NSObject <FCNetworkReachabilityRequirement>
{
    _Bool _satisfied;
    id <FCNetworkReachabilityRequirementObserving> observer;
}

@property(nonatomic, getter=isSatisfied) _Bool satisfied; // @synthesize satisfied=_satisfied;
@property(nonatomic) __weak id <FCNetworkReachabilityRequirementObserving> observer; // @synthesize observer;
- (void).cxx_destruct;
- (void)_update;
@property(readonly, nonatomic) long long offlineReason;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

