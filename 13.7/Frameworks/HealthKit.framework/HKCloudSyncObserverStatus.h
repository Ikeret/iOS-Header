//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSError;

@interface HKCloudSyncObserverStatus : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _syncEnabled;
    NSDate *_lastPullDate;
    NSDate *_lastPushDate;
    NSDate *_restoreCompletionDate;
    NSError *_errorRequiringUserAction;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSError *errorRequiringUserAction; // @synthesize errorRequiringUserAction=_errorRequiringUserAction;
@property(copy, nonatomic) NSDate *restoreCompletionDate; // @synthesize restoreCompletionDate=_restoreCompletionDate;
@property(copy, nonatomic) NSDate *lastPushDate; // @synthesize lastPushDate=_lastPushDate;
@property(copy, nonatomic) NSDate *lastPullDate; // @synthesize lastPullDate=_lastPullDate;
@property(nonatomic) _Bool syncEnabled; // @synthesize syncEnabled=_syncEnabled;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

