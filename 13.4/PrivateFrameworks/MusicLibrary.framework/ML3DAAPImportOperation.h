//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3ImportOperation.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface ML3DAAPImportOperation : ML3ImportOperation
{
    struct ML3ImportSession *_importSession;
    NSError *_importError;
    struct shared_ptr<DAAPParserDelegate> _delegate;
    unsigned char _updateType;
    long long _totalTrackCount;
    long long _totalContainerCount;
    long long _processedTrackCount;
    long long _processedContainerCount;
    _Bool _importSessionStarted;
    int _sourceType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_startImportSessionIfNeeded;
- (_Bool)_processPersonElement:(shared_ptr_37fa1f3d)arg1;
- (_Bool)_processDeletedContainerId:(long long)arg1;
- (_Bool)_processContainerElement:(shared_ptr_37fa1f3d)arg1 withTrackIds:(vector_bbba3654)arg2 trackPersonIdentifiers:(vector_6e7979f9)arg3;
- (_Bool)_processContainerItemCount:(int)arg1;
- (_Bool)_processDeletedTrackId:(long long)arg1;
- (_Bool)_processTrackElement:(shared_ptr_37fa1f3d)arg1;
- (_Bool)_processTrackItemCount:(int)arg1;
- (_Bool)_processUpdateType:(unsigned char)arg1;
- (void)_finishParsingWithError:(id)arg1;
- (_Bool)_importDAAPPayloadFromFile:(id)arg1 shouldProcessPlaylists:(_Bool)arg2;
- (void)updateImportProgress:(float)arg1;
- (shared_ptr_9dbb0ac9)personImportItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;
- (shared_ptr_9dbb0ac9)containerImportItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1 withTrackIds:(vector_bbba3654)arg2 trackPersonIdentifiers:(vector_6e7979f9)arg3;
- (shared_ptr_9dbb0ac9)importItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;
- (_Bool)performImportOfSourceType:(int)arg1 usingConnection:(id)arg2;
- (void)dealloc;

@end

