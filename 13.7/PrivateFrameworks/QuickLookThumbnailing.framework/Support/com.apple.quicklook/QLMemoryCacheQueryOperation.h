//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, QLTGeneratorThumbnailRequest, _QLCacheThread;
@protocol OS_dispatch_queue;

@interface QLMemoryCacheQueryOperation : NSOperation
{
    QLTGeneratorThumbnailRequest *_generatorRequest;
    _QLCacheThread *_cacheThread;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain) QLTGeneratorThumbnailRequest *generatorRequest; // @synthesize generatorRequest=_generatorRequest;
- (void)cancel;
- (void)main;
- (id)initWithThumbnailRequest:(id)arg1 cacheThread:(id)arg2;

@end

