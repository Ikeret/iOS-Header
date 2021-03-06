//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SPOwner/NSObject-Protocol.h>

@class NSData, NSDateInterval, NSNumber;

@protocol SPConnectionMaterial <NSObject>
@property(readonly, copy, nonatomic) NSNumber *secondaryIndex;
@property(readonly, copy, nonatomic) NSNumber *primaryIndex;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property(readonly, copy, nonatomic) NSData *connectionToken;
@property(readonly, copy, nonatomic) NSData *address;
@end

