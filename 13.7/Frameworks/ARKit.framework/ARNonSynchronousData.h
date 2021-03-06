//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>

@class NSArray, NSString;

@interface ARNonSynchronousData : NSObject <ARResultData>
{
    NSArray *_gatheredData;
    double _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain) NSArray *gatheredData; // @synthesize gatheredData=_gatheredData;
- (id)resultDataOfClass:(Class)arg1;
- (id)initWithGatheredData:(id)arg1 timestamp:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

