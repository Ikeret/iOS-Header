//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TVPMediaItemRollInfo : NSObject
{
    _Bool _skippable;
    unsigned long long _type;
    double _start;
    double _duration;
    NSNumber *_adamID;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSkippable) _Bool skippable; // @synthesize skippable=_skippable;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double start; // @synthesize start=_start;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)_typeDescription;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3;

@end

