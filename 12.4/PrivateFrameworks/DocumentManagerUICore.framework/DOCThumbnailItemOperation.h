//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManagerUICore/DOCThumbnailBaseOperation.h>

@class DOCThumbnailFolderIcon, FPItem, QLTThumbnailOperation;

@interface DOCThumbnailItemOperation : DOCThumbnailBaseOperation
{
    QLTThumbnailOperation *_thumbnailOperation;
    FPItem *_item;
    DOCThumbnailFolderIcon *_folderIcon;
}

@property(readonly, nonatomic) DOCThumbnailFolderIcon *folderIcon; // @synthesize folderIcon=_folderIcon;
@property(readonly, nonatomic) FPItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) QLTThumbnailOperation *thumbnailOperation; // @synthesize thumbnailOperation=_thumbnailOperation;
- (void).cxx_destruct;
- (_Bool)generateThumbnail:(id *)arg1 representativeIcon:(_Bool *)arg2;
- (void)cancel;
- (id)subOperation;
- (id)initWithItem:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 delegate:(id)arg5 style:(unsigned long long)arg6 isInteractive:(_Bool)arg7;

@end

