//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXAppResponsivenessMetric : MXMetric
{
    MXHistogram *_histogrammedApplicationHangTime;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) MXHistogram *histogrammedApplicationHangTime; // @synthesize histogrammedApplicationHangTime=_histogrammedApplicationHangTime;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppResponsivenessData:(id)arg1;

@end

