//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFetchOperation.h>

@class NSArray;

@interface FCAssetsFetchOperation : FCFetchOperation
{
    CDUnknownBlockType _progressHandler;
    NSArray *_assetHandles;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *assetHandles; // @synthesize assetHandles=_assetHandles;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (void)_finish;
- (void)performOperation;
- (id)initWithAssetHandle:(id)arg1;
- (id)initWithAssetHandles:(id)arg1;

@end

