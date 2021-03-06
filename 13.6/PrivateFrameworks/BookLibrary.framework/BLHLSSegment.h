//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLHLSKey, BLHLSMap, NSURL;

@interface BLHLSSegment : NSObject
{
    BLHLSMap *_map;
    NSURL *_url;
    double _duration;
    BLHLSKey *_key;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BLHLSKey *key; // @synthesize key=_key;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) BLHLSMap *map; // @synthesize map=_map;
- (id)description;
- (id)initWithURL:(id)arg1 duration:(double)arg2 map:(id)arg3 key:(id)arg4;

@end

