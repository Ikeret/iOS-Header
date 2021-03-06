//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MKTransitSectionPagingFilter : NSObject
{
    _Bool _limitNumLines;
    unsigned long long _numLinesFallbackThreshold;
    unsigned long long _numLinesFallbackValue;
}

+ (id)defaultFilterForInactiveLines;
+ (id)defaultFilterForDepartures;
@property(nonatomic) unsigned long long numLinesFallbackValue; // @synthesize numLinesFallbackValue=_numLinesFallbackValue;
@property(nonatomic) unsigned long long numLinesFallbackThreshold; // @synthesize numLinesFallbackThreshold=_numLinesFallbackThreshold;
@property(nonatomic) _Bool limitNumLines; // @synthesize limitNumLines=_limitNumLines;

@end

