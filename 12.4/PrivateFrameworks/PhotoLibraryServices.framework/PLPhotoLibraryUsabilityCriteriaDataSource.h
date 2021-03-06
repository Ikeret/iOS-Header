//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOrderedSet.h>

#import <PhotoLibraryServices/PLPersonClusterUsabilityCriteriaDataSource-Protocol.h>

@class NSString, PLPhotoLibrary;

@interface PLPhotoLibraryUsabilityCriteriaDataSource : NSOrderedSet <PLPersonClusterUsabilityCriteriaDataSource>
{
    PLPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
- (unsigned long long)fetchVerifiedPersonsCount;
- (id)fetchUnverifiedPersonsSortedByFaceCount;
- (id)fetchResults;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

