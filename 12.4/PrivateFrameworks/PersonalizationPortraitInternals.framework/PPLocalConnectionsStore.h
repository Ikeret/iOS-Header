//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPLocalConnectionsStore : NSObject
{
}

+ (id)defaultStore;
- (id)recentLocationDonationsSinceDate:(id)arg1 error:(id *)arg2;
- (id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id *)arg6;

@end

