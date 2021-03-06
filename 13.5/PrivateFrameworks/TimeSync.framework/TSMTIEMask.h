//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TSMTIEMask : NSObject
{
    NSArray *_elements;
    NSString *_name;
}

+ (id)gPTP1Hop;
+ (id)gPTP7Hop;
+ (id)gPTPMask3;
+ (id)gPTPMask2;
+ (id)gPTPMask1;
+ (id)UDPSoftwareMask;
+ (id)UDPHardwareMask;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
- (void)dealloc;
- (id)mtieMaskFromStart:(double)arg1 toEnd:(double)arg2 withStep:(double)arg3;
- (_Bool)mtieConformsToMask:(id)arg1 withErrors:(id *)arg2;
- (id)initWithDictionary:(id)arg1;

@end

