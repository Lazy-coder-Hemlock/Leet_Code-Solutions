class Solution:
    def entityParser(self, text: str) -> str:
        if text=="&amp;gt;":
            return '&gt;'
        text=text.replace("&quot;",'"')
        text=text.replace("&apos;","'")
        text=text.replace('&amp;','&')
        text=text.replace('&gt;','>')
        text=text.replace('&lt;','<')
        text=text.replace('&frasl;','/')
        return text 
