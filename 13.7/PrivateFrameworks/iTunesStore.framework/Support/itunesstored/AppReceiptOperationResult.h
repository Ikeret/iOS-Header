//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, NSDate, NSError, NSMutableSet, NSSet;

@interface AppReceiptOperationResult : NSObject
{
    NSError *_error;
    NSMutableSet *_expiring;
    NSMutableSet *_refreshed;
    NSMutableSet *_revoked;
    LSApplicationProxy *_soonestExpiring;
    NSDate *_soonestExpirationDate;
}

@property(retain, nonatomic) NSDate *soonestExpirationDate; // @synthesize soonestExpirationDate=_soonestExpirationDate;
@property(retain, nonatomic) LSApplicationProxy *soonestExpiring; // @synthesize soonestExpiring=_soonestExpiring;
@property(readonly, nonatomic) NSSet *revoked; // @synthesize revoked=_revoked;
@property(retain, nonatomic) NSError *resultingError; // @synthesize resultingError=_error;
@property(readonly, nonatomic) NSSet *refreshed; // @synthesize refreshed=_refreshed;
@property(readonly, nonatomic) NSSet *expiring; // @synthesize expiring=_expiring;
- (void)addRefreshed:(id)arg1;
- (void)addRevoked:(id)arg1;
- (void)addExpiring:(id)arg1 expirationDate:(id)arg2;
- (void)dealloc;

@end

