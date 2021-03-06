//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSKDocumentRoot;

@interface TSCH3DDocumentDataCache : NSObject
{
    TSKDocumentRoot *mDocumentRoot;
}

+ (id)dataCacheWithDocumentRoot:(id)arg1;
+ (id)dataFromCache:(id)arg1 forFile:(id)arg2 group:(id)arg3 generateBlock:(CDUnknownBlockType)arg4;
- (id)dataForFile:(id)arg1 group:(id)arg2 generateBlock:(CDUnknownBlockType)arg3;
- (_Bool)debug_nukeDocumentCachePathForGroup:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1;

@end

