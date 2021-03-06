//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExposureNotification/CUXPCCodable-Protocol.h>

@interface ENExposureSummaryItem : NSObject <CUXPCCodable>
{
    double _maximumScore;
    double _scoreSum;
    double _weightedDurationSum;
}

@property(nonatomic) double weightedDurationSum; // @synthesize weightedDurationSum=_weightedDurationSum;
@property(nonatomic) double scoreSum; // @synthesize scoreSum=_scoreSum;
@property(nonatomic) double maximumScore; // @synthesize maximumScore=_maximumScore;
- (void)roundDurations;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;

@end

