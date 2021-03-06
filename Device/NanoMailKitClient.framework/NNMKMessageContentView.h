//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "UITextViewDelegate_Private.h"

@class NNMKMessageBodyLayoutManager, NNMKMessageBodyTextStorage, NNMKMessageContent, NSString, NSTextContainer, UIButton, UIView;

@interface NNMKMessageContentView : UITextView <UITextViewDelegate_Private>
{
    BOOL _contentDownloadFailed;
    BOOL _contentBeingDisplayed;
    id <NNMKMessageContentViewDelegate> _messageContentViewDelegate;
    NNMKMessageContent *_content;
    UIView *_headerView;
    UIButton *_contactsTransparentButton;
    NSTextContainer *_bodyContentTextContainer;
    NNMKMessageBodyLayoutManager *_bodyContentLayoutManager;
    NNMKMessageBodyTextStorage *_bodyContentTextStorage;
}

+ (void)initialize;
- (void)_hideLoadingView;
- (void)_showLoadingView;
@property(retain, nonatomic) NNMKMessageContent *content; // @synthesize content=_content;
@property(retain, nonatomic) NNMKMessageBodyTextStorage *bodyContentTextStorage; // @synthesize bodyContentTextStorage=_bodyContentTextStorage;
@property(retain, nonatomic) NNMKMessageBodyLayoutManager *bodyContentLayoutManager; // @synthesize bodyContentLayoutManager=_bodyContentLayoutManager;
@property(retain, nonatomic) NSTextContainer *bodyContentTextContainer; // @synthesize bodyContentTextContainer=_bodyContentTextContainer;
@property(retain, nonatomic) UIButton *contactsTransparentButton; // @synthesize contactsTransparentButton=_contactsTransparentButton;
@property(nonatomic) BOOL contentBeingDisplayed; // @synthesize contentBeingDisplayed=_contentBeingDisplayed;
@property(nonatomic) BOOL contentDownloadFailed; // @synthesize contentDownloadFailed=_contentDownloadFailed;
- (void)invalidateHeaderViewFrame;
- (id)_defaultParagraphStyle;
- (id)_attributedStringForWarningMessage:(id)arg1;
- (id)mapsURLForAddressResult:(struct __DDResult *)arg1;
- (void)_handleDidEndScrolling;
@property(nonatomic) __weak id <NNMKMessageContentViewDelegate> messageContentViewDelegate; // @synthesize messageContentViewDelegate=_messageContentViewDelegate;
- (void)_redrawContent;
- (void)_updateTextContainerInset;
- (void)notifyContentDownloadFailure;
- (id)initWithCustomHeaderView:(id)arg1;
- (void)notifyImageAttachmentLoadedForContentId:(id)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange)arg3;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (BOOL)_textView:(id)arg1 shouldHighlightForInteractionInRange:(struct _NSRange)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (BOOL)canBecomeFirstResponder;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (void)_contentSizeCategoryChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

