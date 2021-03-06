//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBFinancialAccountValue;

@protocol _INPBSearchForAccountsIntentResponse <NSObject>
+ (Class)accountsType;
@property(readonly, nonatomic) unsigned long long accountsCount;
@property(copy, nonatomic) NSArray *accounts;
- (_INPBFinancialAccountValue *)accountsAtIndex:(unsigned long long)arg1;
- (void)addAccounts:(_INPBFinancialAccountValue *)arg1;
- (void)clearAccounts;
@end

