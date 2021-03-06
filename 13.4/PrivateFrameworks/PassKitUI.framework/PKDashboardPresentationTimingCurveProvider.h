//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/UITimingCurveProvider-Protocol.h>

@class UICubicTimingParameters, UISpringTimingParameters;

@interface PKDashboardPresentationTimingCurveProvider : NSObject <UITimingCurveProvider>
{
    double _fractionComplete;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double fractionComplete; // @synthesize fractionComplete=_fractionComplete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property(readonly, nonatomic) long long timingCurveType;

@end

