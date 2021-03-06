//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, NSURL;
@protocol PXRootLibraryNavigationController;

@interface PhotosURLRedirectRequest : NSObject <UIAlertViewDelegate>
{
    NSURL *_URL;
    id <PXRootLibraryNavigationController> _rootController;
}

- (void).cxx_destruct;
- (void)performRequest;
- (_Bool)_checkAndAlertSubscribedStreamsLimitReached;
- (void)_navigateToPhotoStreamTab;
- (void)_showAlertForError:(unsigned long long)arg1;
- (id)initWithDestinationURL:(id)arg1 rootController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

