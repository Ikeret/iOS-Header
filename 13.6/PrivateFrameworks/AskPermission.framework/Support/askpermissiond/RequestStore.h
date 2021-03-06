//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface RequestStore : NSObject
{
    NSObject<OS_dispatch_queue> *_fileAccessQueue;
    NSMutableDictionary *_itemIdentifierStore;
    NSMutableDictionary *_requestIdentifierStore;
}

+ (id)sharedStore;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *requestIdentifierStore; // @synthesize requestIdentifierStore=_requestIdentifierStore;
@property(readonly, nonatomic) NSMutableDictionary *itemIdentifierStore; // @synthesize itemIdentifierStore=_itemIdentifierStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *fileAccessQueue; // @synthesize fileAccessQueue=_fileAccessQueue;
- (_Bool)_isDateInFuture:(id)arg1;
- (_Bool)_isDateExpired:(id)arg1;
- (id)_filePath;
- (void)_retrieveFile;
- (void)_storeFile;
- (void)_deleteFile;
- (void)storeRequestWithItemIdentifier:(id)arg1 requestIdentifier:(id)arg2;
- (id)requestIdentifierWithItemIdentifier:(id)arg1;
- (void)removeRequestWithIdentifier:(id)arg1;
- (_Bool)containsRequestWithIdentifier:(id)arg1;
- (void)clearRequests;
- (id)init;

@end

