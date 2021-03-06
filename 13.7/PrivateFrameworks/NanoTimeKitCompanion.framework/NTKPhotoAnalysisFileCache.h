//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NTKTaskScheduler;

@interface NTKPhotoAnalysisFileCache : NSObject
{
    NSMutableDictionary *_cache;
    int _sequenceNumber;
    _Bool _cacheDirty;
    NTKTaskScheduler *_taskScheduler;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setPhotoAnalysis:(id)arg1 forIdentifier:(id)arg2;
- (id)photoAnalysisForIdentifier:(id)arg1;
- (_Bool)_save;
- (void)_dirtyCache;
- (_Bool)_load;
- (void)dealloc;
- (id)init;

@end

